/*Anna is a contender for the position of valedictorian at her high school and is curious about how many students have achieved higher
 scores than she has in the exams taken this semester. To address this, you need to create a class named Student with specific features. 
 This class should include an instance variable scores that stores a student's five exam scores. It should also have a method void input() 
 to read five integer scores from standard input and save them to the scores variable. Additionally, the class should provide a method int 
 calculateTotalScore() that returns the sum of the scores. Once this class is implemented, the code will compare Anna's total score against 
 those of other students to determine and print the number of students who have scored higher than her. */

#include <iostream>
using namespace std;

class scores
{
    int score1;
    int score2;
    int score3;
    int score4;
    int score5;
    

public:

    void enter_marks(int s1 , int s2 , int s3 ,int s4,int s5){
      score1 = s1;
      score2 = s2;
      score3 = s3;
      score4 = s4;
      score4 = s5;
    }
     
  

    void checkout()
    {
      
        cout <<score1 << endl;
        cout <<score2 << endl;
        cout <<score3 << endl;
        cout <<score4 << endl;
        cout <<score5 << endl;
    }

   
};

int main()
{
    int n,ana_score;
    cout<<"Enter the number of student  : "<<endl;
    cin>>n;
    scores op[n];
    int sum[n-1];
   int score1 , score2 ,score3 ,score4 ,score5;
    for(int i=0;i<n;i++){
       if(i==0){
        cout<<"Enter the marks of ana:";
       }
       else{
        cout<<"Enter the marks of "<<(i+1)<<" student : ";
       }
       cin>>score1>>score2>>score3>>score4>>score5;
      
       if(i==0){
       op[i].enter_marks(score1,score2,score3,score4,score5);
       ana_score = score1+score2+score3+score4+score5;
    
       }

       else{
        op[i].enter_marks(score1,score2,score3,score4,score5);
          sum[i] = score1+score2+score3+score4+score5;
       }
       cout<<endl;
       
    }
 
   int num=0;
   for(int i=1;i<n;i++){
     if(ana_score < sum[i]){
      num++;
     }

   }
   if(num==0){
cout<<"There is no student who score higher marks then anna";

   }
   else{

   
   cout<<"There are "<<num<<" student who score greater than anna" ;
   }
   
}