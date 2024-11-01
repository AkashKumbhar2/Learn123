#include<iostream>
#define MAX 10
using namespace std;

typedef struct Job{
    int ID;
    string name;
}JOB;

class Queue{
    private:
        JOB Q[MAX]; //Define/Create queue using array using Job objects
        int front,rear;  //Variables to tarck
    
    public:
        Queue(){
            front = rear = -1; //Initialize queue as empty
        }

        bool isQueueEmpty(){
            if (front == -1 )
                return true;
            else
                return false;
        }

        bool isQueueFull(){
            if (rear == MAX-1)
                   return true;
            else
                return false;
        }

        void enQueue(JOB j){
            if(!isQueueFull()){
                if (front == -1){
                    front = rear = 0;
                    Q[rear] = j;
                }
                else
                    Q[++rear] = j;
            }
            else
                cout <<"\n Queue is full";
        }
        void dQueue() {
            if (!isQueueEmpty()) {
                cout << "\n" << Q[front].ID <<"is deleted from Queue";
                if (front == rear) {
                    front = rear = -1;
                }else{
                    front++;
                }
            } else{
                cout<< "\nQueue is Empty!!";
            }
        }
        void displayQueue() {
            if(!isQueueEmpty()) {
                cout << "\n Job Queue is :\n";
                for (int i =front; i <=rear; i++){
                    cout << "|" << Q[i].ID <<"-" << Q[i].name << "|";
                }
            }else{
                cout<<"\nQueue Empty!!";
            }
        }

};
int main(){
    int choice = 0;
    JOB j;
    Queue obj;

    while (choice !=4){
        cout << "\n******************JOB QUEUE****************";
        cout << "\n1.Add JOb in Queue";
        cout << "\n2.Delete JOb in Queue";
        cout << "\n3.Display JOb  Queue";
        cout << "\nExit Application";
        cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nEnter Job ID:";
            cin >> j.ID;
            cout << "\nEnter Job Name:";
            cin >> j.name;
            obj.enQueue(j);
            break;

        case 2:
            obj.dQueue();
            break;
        
        case 3:
            obj.displayQueue();
            break;
            
        case 4:
            cout << "\nGood BYe!!";
            break;
        }
    }
    return 0;
}