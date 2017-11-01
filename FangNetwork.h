///////////////////////////////////////////////////////
//network library
//include common network tools and functions
//By fangwenyi at SMSS,PekingUniversity
//////////////////////////////////////////////////////


double tanh(double x);
//tanh function return the function value of tanh(x)=(e^x-e^(-x))/(e^x+e^(-x))
vector<double> iterationstep(vector<double> x, vector<vector<int> > network,double lambda);
//the iterationstep of y=lambda*A*f(x) 
vector<vector<int> > ToAdjMatrix(const vector<vector<int> > &a);
//transform adjacency list to adjacency matrix




double tanh(double x)
{
	double z=(exp(x)-exp(-x))/(exp(x)+exp(-x));
	return z;
}

vector<double> iterationstep(vector<double> x, vector<vector<int> > network,double lambda)
{
	vector<double> z(network.size(),0);
	int N=network.size();
	for(int i=0;i!=N;i++)
	{
		z[i]=0;
		int M=network[i].size();
		for(int j=0;j!=M ;j++)
		{
			z[i]=x[i]+lambda*tanh(x[network[i][j]]);
		}
	}
	return z;
}

vector<vector<int> > ToAdjMatrix(const vector<vector<int> > &a)
{
	int N=a.size();
	vector<vector<int> > AdjMatrix(N,vector<int> (N,0));	
	for (int i=0;i<a.size();i++)
	{for(int j=0;j<a[i].size();j++)
			AdjMatrix[i][a[i][j]]=1;
	}
	
	return AdjMatrix;

}
