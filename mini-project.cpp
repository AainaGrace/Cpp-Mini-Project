#include <iostream>
using namespace std;

int total(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}


double avg(int total, int size) {
    return (double)total / size;
}

int main() {
    string choice;
    int studentcount;
    
    
    do {
    cout << "Enter the number of students (0 to 100): ";
    cin >> studentcount;

    if (studentcount < 0 || studentcount > 100) {
        cout << "Invalid count! Please enter a number between 0 and 100"<<endl;
    }
} while (studentcount < 0 || studentcount > 100);

    
    if (studentcount == 0) {
        cout << "No students entered." << endl;
        return 0;
    }

     int* marks = new int[studentcount];

    for (int i = 0; i < studentcount;i++) {
        cout << "Enter the mark for student " << (i+1) << ": "; 
        cin >> marks[i];
    }
    
   
    int totalMark = total(marks, studentcount);
    cout << "Total mark: " << totalMark << endl;

    
    double avgMark = avg(totalMark, studentcount);   
    cout << "Average mark: " << avgMark << endl;

    int highest = marks[0];
    int lowest = marks[0];
    for(int i = 1; i < studentcount; i++){
        if(marks[i] > highest) {   
            highest = marks[i];
        }
        if(marks[i] < lowest) {
            lowest = marks[i];
    }
    
}
cout <<"Highest mark :" << highest <<endl;
cout <<"Lowest mark :" << lowest << endl;

    int passcount = 0;
    int failcount = 0;
    for(int i = 0; i < studentcount; i++) {
        if(marks[i] >= 40) {
            passcount++;
        }
        else{
            failcount++;
        }
    }
    cout << "No of students passed :"<< passcount << endl;
    cout << "No of students failed :"<< failcount << endl;


   
    delete[] marks;



    
return 0;
}
