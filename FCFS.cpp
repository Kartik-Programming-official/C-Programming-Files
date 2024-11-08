#include <iostream>
#include <vector>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
};

void fcfs(vector<Process>& processes) {
    int currentTime = 0;
    for (auto& p : processes) {
        if (p.arrivalTime > currentTime) {
            currentTime = p.arrivalTime;
        }
        p.completionTime = currentTime + p.burstTime;
        currentTime = p.completionTime;
    }
}

int main() {
    int n;
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
    }

    fcfs(processes);

    cout << "Process ID\tArrival Time\tBurst Time\tCompletion Time\n";
    for (const auto& p : processes) {
        cout << p.id << "\t\t" << p.arrivalTime << "\t\t" << p.burstTime << "\t\t" << p.completionTime << endl;
    }

    return 0;
}