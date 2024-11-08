#include <stdio.h>

#define MAX_PROCESSES 10
#define TIME_QUANTUM 2

struct Process {
    int pid;
    int arrivalTime;
    int burstTime;
    int remainingTime;
};

void roundRobinScheduling(struct Process processes[], int n) {
    int currentTime = 0;
    int totalRemaining = 0;
    int i;

    // Calculate total remaining time
    for (i = 0; i < n; i++) {
        processes[i].remainingTime = processes[i].burstTime;
        totalRemaining += processes[i].remainingTime;
    }

    // Perform Round Robin Scheduling
    while (totalRemaining > 0) {
        for (i = 0; i < n; i++) {
            if (processes[i].remainingTime > 0) {
                if (processes[i].remainingTime <= TIME_QUANTUM) {
                    currentTime += processes[i].remainingTime;
                    totalRemaining -= processes[i].remainingTime;
                    processes[i].remainingTime = 0;
                    printf("Process %d completed at time %d\n", processes[i].pid, currentTime);
                } else {
                    currentTime += TIME_QUANTUM;
                    totalRemaining -= TIME_QUANTUM;
                    processes[i].remainingTime -= TIME_QUANTUM;
                    printf("Process %d executed at time %d\n", processes[i].pid, currentTime);
                }
            }
        }
    }
}

int main() {
    int n, i;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[MAX_PROCESSES];

    printf("Enter arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        printf("Arrival time of process %d: ", i + 1);
        scanf("%d", &processes[i].arrivalTime);
        printf("Burst time of process %d: ", i + 1);
        scanf("%d", &processes[i].burstTime);
    }

    roundRobinScheduling(processes, n);

    return 0;
}
