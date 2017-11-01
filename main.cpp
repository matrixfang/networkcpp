#include <stdio.h>
#include "stdafx.h"
#include "Network.h"
#include <iostream>
#include <algorithm>
#include <iostream>
#include <fstream>
#include "time.h"
#include "FangNetwork.h"

using namespace std;

int main()
{
	vector<vector<int> > banetwork,aa;
	//generate network banerwork and ernetwork
	banetwork=BAScaleFree(41, 10, 0.1, 3);
	aa=ToAdjMatrix(banetwork);
	Outputfile(aa,"dafadsfa.txt",1);
   
	// int N=banetwork.size();
	// vector<int> degreedis=degree(banetwork);
	// double averagedegree=sum_array(degreedis)/N;

	// iteration step
	// vector<double> z(banetwork.size(),1);
	// for(int i=0;i!=banetwork.size();i++)
	// {
	// 	z=iterationstep(z,banetwork,1);
	// }
	
	// cout<< averagedegree<<"\n"<<z[0]<<endl;
	// Outputfile(banetwork,"banetwork.txt",0);

	return 1;
}
