# Review-Project- by Brandon Charette, Kaidan Campbell, Andrew Dionizio and Kyle DaSilva 

Summary & Github Repo:

Planning:

       Grade Class
       - private: grades
       - public: sections,section grades,weight, functions to get the grades and also solve
       
       main function
              loop that ends when user is done inputing
                     gets the course from user and creates object
                     call functions to get grades and solve
                     outputs grade for certain course
                     loop that asks user to input another course
                            if yes redo loop
                            if no stop program
       
       function to get grades
              loop that ends when user is done inputing
                     input section of grades from course like test,quizzes, etc
                     store them in 1D vector
                     input grades for certian sections
                     store them in 1D vector
                     input weight of the grades in each section
                     store them in 1D vector
              
      function that calculates grade
              loop through grades
                     find grade of each section
                     add to total
                     
      function to clear previous vectors if other courses want to be inputted
                     
       
Features:

The inputs being taken are the grades for labs, assignments,and the final for each course during a student's semester. After all of the inputs, our code will output the final grade for each specific class. This development is important to our group so throughout the semester we are able to easily calculate our final grade by just putting our current grades into a text file.

Compile Instructions:

In order to compile the code you will need to use g++, then after running you will be asked to input the certain course, grades and the weight of the grades.
       Ex. g++ grade.cpp -o grades
           ./grades
           "Please enter a course: "
            "Please enter a class section for "
            ". (i.e exams, labs) press '/' when no more secitons are present: "
            "Please enter the grade for "
            "Please enter the weight for "
            
            

Walkthrough:
