/*
 * main.cpp
 *
 *  Created on: 12 Kas 2015
 *      Author: Guner
 */

/* start vertex e hedef vertex girilir,hangi vertex ten baslanilacaksa verilen
 * pred arrayinin ilgili indexindeki contente bakilir. Alinan bu deger yine ayni yontem ile
 * hedef vertex olarak secilen degere ulasilana kadar devam ettirilir.
 *
 *
 */
#include "DijkstrasAlgorithm.h"
#include <iostream>
using namespace std;
/*
int main2()
{
	Graph g;
	Graph g = Graph(false, 5);
	g.insert(Edge(0, 2, 1));
	g.insert(Edge(0, 1, 2));
	g.insert(Edge(1, 4, 2));
	g.insert(Edge(2, 3, 1));
	g.insert(Edge(3, 4, 1));
	g.insert(Edge(2, 4, 3));
	g.insert(Edge(0, 4, 5));

	double d[5];
	int p[5];
	int start=0;
	DijkstrasAlgorithm::dijkstrasAlgorithm(g, start, p, d);
	for (int i = 0; i < 5; ++i) {
		if(i==start)
		{
			cout << "start-vertex" << " -p "<< i <<"\n";
		}
		else
		{
			cout << p[i] << " -p "<< i <<"\n";
		}

	}
	return 0;
}*/

int main()
{
	/*
	Graph g;
	vector<Vertex> list,a;
	g.addVertex(Coor(10,10));
	g.addVertex(Coor(10,50));
	g.addVertex(Coor(50,50));
	g.addVertex(Coor(10,80));
	g.addVertex(Coor(50,80));
	g.addVertex(Coor(80,80));
	g.addVertex(Coor(80,10));
	g.addVertex(Coor(80,50));

	list=g.getVertexList();

	g.setEdge(list[0],list[1]);
	g.setEdge(list[0],list[2]);
	g.setEdge(list[1],list[3]);
	g.setEdge(list[4],list[5]);
	g.setEdge(list[2],list[6]);
	g.setEdge(list[6],list[7]);
	g.setEdge(list[7],list[5]);


	for(unsigned int i =0;i<list.size();++i){
		cout << "x: " << list[i].getX() << " y: " << list[i].getY() <<  "  index:"<< i << endl;
	}

	a=g.shortestPath(list[0],list[5]);
	cout << "----------------------\n";
	for(unsigned int i =0;i<a.size();++i){
		cout << "-x: " << a[i].getX() << " y: " << a[i].getY() << endl;
	}

	Vertex node=Vertex(12,Coor(81,81));
	cout<<"nearest vertex "<< g.nearestVertex(list,node)<<endl;
	*/
	Vertex v1=Vertex(0,10,10);
	Vertex v2=Vertex(1,10,50);
	Edge e=Edge(v1,v2);
	cout << "degree: " << e.getDegree() << " slope: " << e.getSlope() << endl;
	return 0;
}
