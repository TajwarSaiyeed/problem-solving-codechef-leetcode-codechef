#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    void display();
};

void Solution::display()
{
    cout << "\t\t\t*************************" << endl;
    cout << "\t\t\t                                                                        " << endl;
    cout << "\t\t\t                       WELCOME TO Quiz Game                            " << endl;
    cout << "\t\t\t                                                                        " << endl;
    cout << "\t\t\t*************************" << endl
         << endl
         << endl;

    int score = 0;
    string name;
    int age;

    cout << "\t\t\tEnter Your name : ";
    getline(cin, name);
    cout << "\t\t\tEnter Your Age : ";
    cin >> age;

    cout << "\n\n\t\t\tWelcome to the Simple Quiz Game!\n\n";

    cout << "\nLet's get started, " << name << "!\n\n";

    cout << "1. Who invented C++?\n";
    cout << "a) Dennis Ritchie\nb) James Gosling\nc) Bjarne Stroustrup\nd) Guido van Rossum\n";
    char answer1;
    cout << "Your Answer: ";
    cin >> answer1;
    if (answer1 == 'c' || answer1 == 'C')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: c) Bjarne Stroustrup.\n";
    }

    cout << "\n2. In which year was C++ first developed?\n";
    cout << "a) 1972\nb) 1980\nc) 1983\nd) 1991\n";
    char answer2;
    cout << "Your Answer: ";
    cin >> answer2;
    if (answer2 == 'c' || answer2 == 'C')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: c) 1983.\n";
    }

    cout << "\n3. What was the original name of C++?\n";
    cout << "a) Advanced C\nb) C with Classes\nc) C Plus\nd) New C\n";
    char answer3;
    cout << "Your Answer: ";
    cin >> answer3;
    if (answer3 == 'b' || answer3 == 'B')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: b) C with Classes.\n";
    }

    cout << "\n4. C++ is a ____ programming language.\n";
    cout << "a) Functional\nb) Object-oriented\nc) Procedural\nd) Scripting\n";
    char answer4;
    cout << "Your Answer: ";
    cin >> answer4;
    if (answer4 == 'b' || answer4 == 'B')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: b) Object-oriented.\n";
    }

    cout << "\n5. Which company did Bjarne Stroustrup work for when he developed C++?\n";
    cout << "a) Microsoft\nb) Bell Labs\nc) IBM\nd) Sun Microsystems\n";
    char answer5;
    cout << "Your Answer: ";
    cin >> answer5;
    if (answer5 == 'b' || answer5 == 'B')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: b) Bell Labs.\n";
    }

    cout << "\n6. What was one of the main motivations for creating C++?\n";
    cout << "a) To create a new web language\nb) To improve C for system programming\nc) To develop games\nd) To replace Python\n";
    char answer6;
    cout << "Your Answer: ";
    cin >> answer6;
    if (answer6 == 'b' || answer6 == 'B')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: b) To improve C for system programming.\n";
    }

    cout << "\n7. Which language influenced the development of C++ the most?\n";
    cout << "a) Python\nb) Java\nc) C\nd) Pascal\n";
    char answer7;
    cout << "Your Answer: ";
    cin >> answer7;
    if (answer7 == 'c' || answer7 == 'C')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: c) C.\n";
    }

    cout << "\n8. C++ added ____ features to the C programming language.\n";
    cout << "a) Object-oriented\nb) Scripting\nc) Functional\nd) Assembly\n";
    char answer8;
    cout << "Your Answer: ";
    cin >> answer8;
    if (answer8 == 'a' || answer8 == 'A')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: a) Object-oriented.\n";
    }

    cout << "\n9. Which of these is a characteristic of C++?\n";
    cout << "a) Platform-independent\nb) Strictly interpreted\nc) Supports both procedural and object-oriented programming\nd) Dynamic typing\n";
    char answer9;
    cout << "Your Answer: ";
    cin >> answer9;
    if (answer9 == 'c' || answer9 == 'C')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: c) Supports both procedural and object-oriented programming.\n";
    }

    cout << "\n10. What does '++' signify in C++?\n";
    cout << "a) Increment\nb) New version\nc) Addition\nd) None of these\n";
    char answer10;
    cout << "Your Answer: ";
    cin >> answer10;
    if (answer10 == 'a' || answer10 == 'A')
    {
        cout << "Correct!\n";
        score += 10;
    }
    else
    {
        cout << "Wrong! The correct answer is: a) Increment.\n";
    }

    cout << "\n"
         << name << ", your final score is: " << score << " out of 100\n";
    if (score == 100)
        cout << "Perfect score! Great job!\n";
    else if (score >= 60)
        cout << "Well done!\n";
    else
        cout << "Keep practicing!\n";
}

int main()
{
    Solution obj;
    obj.display();

    return 0;
}