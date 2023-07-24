# include<iostream>

using namespace std;

class movie{
   private:
   string rating;
   public:
    string title;
    string director;
     
    movie(string aTitle,string aDirector, string aRating){
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating){
        if(aRating == "G" || aRating == "PG" || aRating == "R" || aRating == "Not Rated"){
            rating = aRating;

        } else{
            rating = "Not Rated";
        }
    }

    string getRating(){

        return rating;
    }



};

int main()
{
    movie avengers ("the Avengers", "joss whedon", "PG");


    

    cout << avengers.getRating();
  
    return 0;
}