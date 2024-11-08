#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int id;
    int burstTime;
    int priority;
    int completionTime;
};

bool comparePriority(const Process& p1, const Process& p2) {
    return p1.priority < p2.priority;
}

void priorityScheduling(vector<Process>& processes) {
    int currentTime = 0;
    for (auto& p : processes) {
        p.completionTime = currentTime + p.burstTime;
        currentTime = p.completionTime;
    }
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    cout << "Enter burst time and priority for each process:\n";
    for (int i = 0; i < n; ++i) {
        processes[i].id = i + 1;
        cout << "Process " << processes[i].id << ":\n";
        cout << "Burst time: ";
        cin >> processes[i].burstTime;
        cout << "Priority: ";
        cin >> processes[i].priority;
    }

    // Sort processes based on priority
    sort(processes.begin(), processes.end(), comparePriority);

    priorityScheduling(processes);

    cout << "Process ID\tBurst Time\tPriority\tCompletion Time\n";
    for (const auto& p : processes) {
        cout << p.id << "\t\t" << p.burstTime << "\t\t" << p.priority << "\t\t" << p.completionTime << endl;
    }

    return 0;
}
