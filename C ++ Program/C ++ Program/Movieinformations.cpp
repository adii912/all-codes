# include<iostream>

using namespace std;

class movie{
    public: 
    string title;
    string director;
    string rating; 
    movie(string aTitle,string aDirector, string aRating){
        title = aTitle;
        director = aDirector;
        rating = aRating;

    }

};

int main()
{
    movie avengers ("the Avengers", "joss whedon", "pg-13");

    cout << avengers.title;
  
    return 0;
}