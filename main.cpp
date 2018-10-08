// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - problem 5 of the individual problems -page 504 of of the book
// Program: splitting the text with the commas according to the delimiter
// Author:  Abdelrahman Reda Fadl Ahmed Ali
// Date:    8 October 2018
// Version: 2.0

#include <iostream>
#include <vector>
#include <string>


using namespace std;



vector <string>  split(string target, string delimiter )

{



vector <string> newvectorr ;                        // the vector which will contain the targeted text

string testing="" ;                                 // the testing string for the delimiter

int rightinterval=0  ;                              // the right interval of the container of the tested test


int leftinterval=delimiter.size() ;                   // the left interval of the container of the tested test


int detector = 0 ;                                 // the detector of the delimiters



//this stage to get the final result of the detector



for (int i = 0 ; i < target.size() ; i = i + (delimiter.size()))
{

         for (int ii = i ; ii < leftinterval ; ii++)

                         {
                                testing += target[ii] ;

                         }


                 if (testing == delimiter) {

                              detector++ ;


                 }



                testing = ""  ;   //initializing the testing value
                leftinterval += delimiter.size();

}


int copy_detector = detector ;




//the end of the stage
//stating the stage of the processing



//reinitializing all variables values

detector =0 ;
rightinterval=0  ;
leftinterval=delimiter.size() ;



newvectorr.push_back("\"") ;

for (int i = 0 ; i<target.size() ; i=i+(delimiter.size()))
{

         for (int ii=i ; ii<leftinterval ;ii++)

                 {
                     testing+=target[ii] ;

                 }
                 if (testing == delimiter) {

                                            newvectorr.push_back("\"") ;

                                            detector++ ;


                                            if (detector==copy_detector){

                                                        newvectorr.push_back(",and ") ;





                                            }
                                            else
                                            {
                                                        newvectorr.push_back(",") ;



                                            }




                                newvectorr.push_back("\"") ;

                 }




                 else
                 {

                                newvectorr.push_back(testing) ;
                 }

                testing=""  ;

                leftinterval += delimiter.size();




}
            newvectorr.push_back("\".") ;



//reading  vector content



for (int i = 0 ; i<newvectorr.size() ; i++)
{


    cout<<newvectorr[i];


}




return  newvectorr ;

}

int main()
{




string text ;          //input text
getline(cin,text) ;




string delimiter ;    // input the delimiter
getline(cin,delimiter) ;



split(text, delimiter) ;

}
