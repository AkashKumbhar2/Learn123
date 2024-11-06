/*
#include<iostream>
#define MAX 10
using namespace std;

typedef struct JOB{
    int ID;
    string name;
}JOB;

class Queue{
    private:
        JOB Q[MAX];
        int front,rear;
    public:
        Queue(){
        front = rear = -1;
        }

        //Check if queue is empty
        bool isQueueEmpty(){
            if (front == -1)
                return true;
            else
                return false;
        }

        //Check if queue is full
        bool isQueueFull(){
            if(rear == MAX-1)
                   return true;
            else
                return false;
        }
        void enQueue(JOB j){
            if(! isQueueFull()){
                if(front == -1){
                    front=rear=0;
                    Q[rear]=j;
                }
            else
                Q[++rear]=j;
            }
            else
             cout<<"\nQueue is full!!";
        }

        void dQueue(){

            if(!isQueueEmpty()){
                if(front == rear){
                    cout<<"\n"<<Q[front].ID<<"  is deleted from Queue";
						front=rear=-1;
                }
                else
                {
                    cout<<"\n"<<Q[front].ID<<"  is deleted from Queue";
						front++;
                }
            }
            else 
                cout<<"\nQueue is Empty!!";
        }

        //Display Queue Contents
        void displayQueue(){
            int i;
            if(!isQueueEmpty()){
                cout<<"\nJob Queue is:\n";
                
                for(i=front;i<=rear;i++)
                    cout<<"|"<<Q[i].ID<<"-"<<Q[i].name<<"| ";
            }
            else
				cout<<"\n Queue Empty!!";
        }
	};
   
//Driver Code
int main(){
    int choice = 0;
    JOB j;
    Queue obj;
    while(choice !=4){
        cout<<"\n***************JOB QUEUE*****************";
		cout<<"\n1. Add Job in Queue";
		cout<<"\n2. Delete Job from Queue";
		cout<<"\n3. Display Job Queue";
		cout<<"\n4. Exit Application";
		cout<<"\nWhat is your choice::";
		cin>>choice;
        switch(choice){
            case 1:
				cout<<"\nEnter Job ID:";
				cin>>j.ID;
				cout<<"\nEnter Job Name:";
				cin>>j.name;
				obj.enQueue(j);
				break;
			case 2:
				obj.dQueue();
				break;
			case 3:
				obj.displayQueue();
				break;
			case 4:
				cout<<"\nGood By!!";
				break;
        }
    }
}
 */
//Experiment 13
#include <iostream>
using namespace std;
#define MAX 3

class DQueue{
    private:
        int Q[MAX];
        int front , rear;
    public:
        DQueue()
        {
            front=rear=-1;
        }

        //add element from front  in DQueue
        void addBeginDQueue(int val){
            if(front!=0){
                if(front == -1){
                    front=rear=0;
                    Q[rear]=val;
                }
                else
                    Q[--front]=val;
            }
            else
                cout<<"\nDQueue is full at front!!";
        }

        //remove element from front at the DQueue
        void delBeginDQueue(){
            if(front != -1){

            if(front == rear){
                cout<< Q[front] <<"is deleted from DQueue";
                front = rear = -1;
            }
            else{
                cout<< Q[front] << "is deleted from DQueue";
                front++;
                } 
            }
            else
            cout << "\nDQueue is empty!!";
        }

//Add Elemnt in DQueue at rear
        void addEndDQueue(int val){
            if(rear != MAX - 1){
                if (front == -1){
                    front = rear = 0;
                    Q[rear] = val;
                }
                else
                    Q[++rear] = val;
            }
                else
                    cout << "\nDQueue is full at the rear!!";
        }

    //Remove Elemnt in DQueue at rear
        void delEndDQueue(){
                if (rear != -1){
                if (front = rear){
                    cout << "\n" <<Q[rear] << "is deleted from DQueue";
                    front = rear= -1;
                }
                else{
                    cout << Q[rear] << " is deleted from DQueue";
                    rear--;
                }
            }
            else
                cout <<"\nDueue is Empty!!";       
                 }
        

        //Display DQueue Contents
         void displayDQueue(){
                int i;
                if (front != -1) {
                    cout << "\nJOb DQueue is:\n";
                    for(i = front;i<=rear;i++)
                        cout << Q[i] << "";
                }
                else 
                    cout <<"\nDueue is Empty!!";       
                 
        }
};

//Driver COde
int main(){
    int choice = 0, val;
    DQueue obj;
    while(choice != 6){
        cout << "\n***************Double Ended Queue*****************";
        cout << "\n1. Add element at Begin";
        cout << "\n2. Delete element at Begin";
        cout << "\n3. Add element at End";
        cout << "\n4. Delete element at End";
        cout << "\n5. Display DQueue";
        cout << "\n6. Exit Application";
        cout << "\nWhat is your choice::";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "\nEnter Job ID:";
                cin >> val;
                obj.addBeginDQueue(val);
                break;
            case 2:
                obj.delBeginDQueue();
                break;
            case 3:
                cout << "\nEnter Job ID:";
                cin >> val;
                obj.addEndDQueue(val);
                break;
            case 4:
                obj.delEndDQueue();
                break;
            case 5:
                obj.displayDQueue();
                break;
            case 6:
                cout << "\nGood Bye!!";
                break;
            default:
                cout << "\nInvalid Choice! Please try again.";
                break;
        }
    }
    return 0;
}