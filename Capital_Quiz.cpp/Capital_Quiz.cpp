//This program uses a map to quiz it's user about US states
#include<iostream>
#include<string>
#include<unordered_map>
#include<iomanip>
using namespace std;

int main() {
	//Declare variables
	unordered_map<string, string> StateAndCapital;
    string user_input;
    int ptsscored = 0, total = 1;
    

    // Adding states and capitals to the unordered_map
    StateAndCapital["Alabama"] = "Montgomery";
    StateAndCapital["Alaska"] = "Juneau";
    StateAndCapital["Arizona"] = "Phoenix";
    StateAndCapital["Arkansas"] = "Little Rock";
    StateAndCapital["California"] = "Sacramento";
    StateAndCapital["Colorado"] = "Denver";
    StateAndCapital["Connecticut"] = "Hartford";
    StateAndCapital["Delaware"] = "Dover";
    StateAndCapital["Florida"] = "Tallahassee";
    StateAndCapital["Georgia"] = "Atlanta";
    StateAndCapital["Hawaii"] = "Honolulu";
    StateAndCapital["Idaho"] = "Boise";
    StateAndCapital["Illinois"] = "Springfield";
    StateAndCapital["Indiana"] = "Indianapolis";
    StateAndCapital["Iowa"] = "Des Moines";
    StateAndCapital["Kansas"] = "Topeka";
    StateAndCapital["Kentucky"] = "Frankfort";
    StateAndCapital["Louisiana"] = "Baton Rouge";
    StateAndCapital["Maine"] = "Augusta";
    StateAndCapital["Maryland"] = "Annapolis";
    StateAndCapital["Massachusetts"] = "Boston";
    StateAndCapital["Michigan"] = "Lansing";
    StateAndCapital["Minnesota"] = "St. Paul";
    StateAndCapital["Mississippi"] = "Jackson";
    StateAndCapital["Missouri"] = "Jefferson City";
    StateAndCapital["Montana"] = "Helena";
    StateAndCapital["Nebraska"] = "Lincoln";
    StateAndCapital["Nevada"] = "Carson City";
    StateAndCapital["New Hampshire"] = "Concord";
    StateAndCapital["New Jersey"] = "Trenton";
    StateAndCapital["New Mexico"] = "Santa Fe";
    StateAndCapital["New York"] = "Albany";
    StateAndCapital["North Carolina"] = "Raleigh";
    StateAndCapital["North Dakota"] = "Bismarck";
    StateAndCapital["Ohio"] = "Columbus";
    StateAndCapital["Oklahoma"] = "Oklahoma City";
    StateAndCapital["Oregon"] = "Salem";
    StateAndCapital["Pennsylvania"] = "Harrisburg";
    StateAndCapital["Rhode Island"] = "Providence";
    StateAndCapital["South Carolina"] = "Columbia";
    StateAndCapital["South Dakota"] = "Pierre";
    StateAndCapital["Tennessee"] = "Nashville";
    StateAndCapital["Texas"] = "Austin";
    StateAndCapital["Utah"] = "Salt Lake City";
    StateAndCapital["Vermont"] = "Montpelier";
    StateAndCapital["Virginia"] = "Richmond";
    StateAndCapital["Washington"] = "Olympia";
    StateAndCapital["West Virginia"] = "Charleston";
    StateAndCapital["Wisconsin"] = "Madison";
    StateAndCapital["Wyoming"] = "Cheyenne";

    //Display instructions to user
    cout << "Welcome to QuiZr\n";
    cout << "This app will quiz you on the Sates and Their capitals\n";
    cout << "Please input your answers adhering ot the following rules:\n";
    cout << "i.All names must be spelled correctly.\n";
    cout << "ii.Each individual part of name must be capitalized for example 'Santa Fe' or 'California'.\n";
    cout << "To get started press enter.";
    cin.get();
    cout << "GREAT!! LET'S GO!!\n\n";

    //Use range based for loop to iterate through
    for(auto element: StateAndCapital)
    {
        cout << setw(2) << left << total  <<""<<".What is the capital of " << element.first << "?";
        //Get user input
        getline(cin, user_input);
        user_input[0] = toupper(user_input[0]);

        //Add points if correct
        if (user_input == element.second)
            ptsscored++;

        //increment total counter
        total++;      
    }

    //Display Score to user
    cout << "\nYou scored " << ptsscored << " points out of " << total - 1;


	return 0;
}

    


