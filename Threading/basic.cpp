#include<iostream> //Basic input-output stream STL
#include<thread> // STL for thread
#include<mutex> // STL for thread mutex lock
#include<vector> //STL for data structure vector
#include<random> // STL for generating random numbers

using namespace std;

// Global variables
mutex values_mtx; // For global vector
mutex cout_mtx;  // For cout, cause this program is not thread safe
vector<int> values;

int randGen(const int& min, const int& max) {
    static thread_local mt19937 generator(hash<thread::id>()(this_thread::get_id()));
    uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}

void threadFnc(int tid) {
	// Calculate the result.

    // Cout lock and unlock are used so that code only executes again if lock was unlocked.
	cout_mtx.lock(); 
	cout << "Starting thread " << tid << ".\n";
	cout_mtx.unlock(); 

	values_mtx.lock();
	int val = values[0];
	values_mtx.unlock();

	int rval = randGen(0, 10);
	val += rval;

	cout_mtx.lock();
	cout << "Thread " << tid << " adding " << rval << ". New value: " << val << ".\n";
	cout_mtx.unlock();

	values_mtx.lock();
	values.push_back(val);
	values_mtx.unlock();
}


int main() {
	// Set global data in queue.
	values.push_back(42);
	// Start the threads, wait for them to finish with thread ID.
	thread tr1(threadFnc, 1);
	thread tr2(threadFnc, 2);
	thread tr3(threadFnc, 3);
	thread tr4(threadFnc, 4);
    
    //Terminates the Threads
	tr1.join();
	tr2.join();
	tr3.join();
	tr4.join();

	// Read the calculated values.
	cout << "Input: " << values[0] << ", Result 1: " << values[1] << ", Result 2: " << values[2] << ", Result 3: " << values[3] << ", Result 4: " << values[4] << "\n";

	return 0;
}
