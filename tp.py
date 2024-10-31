'''
AIM:
Write a Python program 
1. To store students PRNs with date and month of birth. 
List_A and List_B be the two list for two SE Computer divisions. 
3. Lists are sorted on date and month.
4. Merge these two lists into third list “List_SE_Comp_DOB”
resulting in sorted information about Date of Birth of SE Computer students


INPUT: 
    1. Student PRN, Day & Month for SE-A & SE-B

OUTPUT:
   2. Sorted List of  
DATE: 22.07.2024
'''
import datetime

#ADT of Student
class Student:
    def __init__(self):
        self.PRN=None
        self.dob=datetime.date
       
        

#Implementation Class
class SEComputer:
    def __init__(self):
        self.n1=0 #No. of students in SE-A
        self.n2=0 #No. of students in SE-B
        self.SEAList=[] #SE-A division list
        self.SEBList=[] #SE-B division list
        self.SECOMPList=[] #SE-A& SE-B division list
        
    #Function/Method for reading Student information
    def readStudentdataSEA(self):
        self.n1=int(input("Enter no.of students in SE-A"))
        for i in range(self.n1):
            s=Student()
            s.PRN=input("Enter your PRN::")
            day=int(input("Enter day of Birth:"))
            month=int(input("Enter month of Birth:"))
            year=int(input("Enter year of Birth - 4-digit:"))
            s.dob=datetime.date(year,month,day)
            self.SEAList.append(s)
            
            
    #Function/Method for displaying book information
    def displayStudentListSEA(self):
        for i in range(self.n1):
            print("\n\t",self.SEAList[i].PRN,"    ",str(self.SEAList[i].dob))
        
    def sortStudentList(self):
        pass
    
    def mergeList(self):
        pass

    
           
#Driver Code

obj=SEComputer()
choice=0
while (choice != 5):
    print("\n***************SE COMPUTER STUDENT *******************")
    print("1. Read SE-A/SE-B Student Lists")
    print("2. Display SE-A/SE-B  Student Lists")
    print("3. Sort SE-A/SE-B Student Lists ")
    print("4. Merge SE-A/SE-B  Student Lists ")
    print("5. Exit Application")
    choice=int(input("Enter your choice:"))
    
    if(choice == 1):
        obj.readStudentdataSEA()
        
    elif(choice == 2):
        obj.displayStudentListSEA()
    elif(choice == 3):
        pass
    elif(choice == 4):
        pass
    elif(choice == 5):
        print("Good By")
        break
    else:
        print("Wrong Choice")

