#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int remainingTime;
};

void roundRobin(vector<Process>& processes, int quantum) {
    queue<Process> readyQueue;
    int currentTime = 0;
    int n = processes.size();

    int totalRemainingTime = 0;
    for (const auto& p : processes) {
        totalRemainingTime += p.burstTime;
    }

    while (totalRemainingTime > 0) {
        for (int i = 0; i < n; ++i) {
            if (processes[i].arrivalTime <= currentTime && processes[i].remainingTime > 0) {
                int executionTime = min(quantum, processes[i].remainingTime);
                currentTime += executionTime;
                processes[i].remainingTime -= executionTime;
                totalRemainingTime -= executionTime;

                if (processes[i].remainingTime == 0) {
                    processes[i].burstTime = currentTime - processes[i].arrivalTime;
                } else {
                    readyQueue.push(processes[i]);
                }
            }
        }

        if (!readyQueue.empty()) {
            Process nextProcess = readyQueue.front();
            readyQueue.pop();
            readyQueue.push(nextProcess);
        }
    }
}

int main() {
    int n, quantum;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    cout << "Enter arrival time and burst time for each process:\n";
    for (int i = 0; i < n; ++i) {
        processes[i].id = i + 1;
        cout << "Process " << processes[i].id << ":\n";
        cout << "Arrival time: ";
        cin >> processes[i].arrivalTime;
        cout << "Burst time: ";
        cin >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;
    }

    cout << "Enter time quantum: ";
    cin >> quantum;

    roundRobin(processes, quantum);

    cout << "Process ID\tBurst Time\n";
    for (const auto& p : processes) {
        cout << p.id << "\t\t" << p.burstTime << endl;
    }

    return 0;
}
