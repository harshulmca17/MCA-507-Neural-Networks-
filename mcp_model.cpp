#include<iostream>
#include<vector>

using namespace std;

class MCPNeuron
{
	int w1;
	int w2;

	int theta;

public:

	MCPNeuron(){
		w1 = 0;
		w2 = 0;

		theta = 0;
	}

	void initialize_(){
		cout<<"\nEnter weight 1:";
		cin>>w1;
		cout<<"\nEnter weight 2:";
		cin>>w2;

		cout<<"\nEnter theta:";
		cin>>theta;
	}

	int decide(vector<int> input){

		int sum_ = w1*input[0] + w2*input[1];

		if( sum_ >= theta )
			return 1;
		
	return 0;
	}

	void calculate_truth_table(vector<vector<int>> input){

		cout<<"x1\tx2\ty\n";

		for(int i = 0;i<input.size();i++){
			cout<<"\n"<<input[i][0]<<"\t"<<input[i][1]<<"\t"<<decide(input[i]);
		}
	}

};


int main(){

	vector<vector<int>> input_ = {{0,0},{0,1},{1,0},{1,1}};
	MCPNeuron AND;
	AND.initialize_();
	AND.calculate_truth_table(input_);
	cout<<"\n";
	return 0;
}