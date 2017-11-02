#include <iostream>
#include <string>
#include <vector>
#include "server.h"
#include "items.h"

using namespace std;

Serving serving;
//constructor
Server::Server(string name, int employee_number, int total_filled, int hourly_salary): _name{name}, _employee_number{employee_number}, _total_filled{total_filled}, _hourly_salary{hourly_salary}{}	
	
//to get server's name
string Server::get_name(){ return _name; }

//to get server's employee number
int Server::get_employee_number(){ return _employee_number; }

//to get server's total orders filled in career
int Server::get_total_filled(){ return _total_filled; }

//to get server's hourly salary/pay
int Server::get_hourly_salary(){ return _hourly_salary; }


