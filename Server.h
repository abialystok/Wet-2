#ifndef SERVER_H_
#define SERVER_H_

#include <iostream>
#include <algorithm>

class Server {
private:
	int id;
	int traffic;
	int DC_id;
public:
	Server(int id, int DC_id);
	~Server() = default;
	int GetID();
	int GetTraffic();
	void SetTraffic(int new_traffic);
	int GetDCID();
	friend int compServers(Server* s1, Server* s2);
};

int compServers(Server* s1, Server* s2);

#endif