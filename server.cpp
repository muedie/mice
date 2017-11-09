#include <vector>
#include "server.h"
#include <iomanip>

using namespace std;

//constructor
Server::Server(string name, int employee_number, double hourly_salary): _name{name}, _employee_number{employee_number}, _hourly_salary{hourly_salary}{}	

//to get server's name
string Server::get_name(){ return _name; }

//to get server's employee number
int Server::get_employee_number(){ return _employee_number; }

//to get server's total orders filled in career
int Server::get_total_filled(){ return _total_filled; }

//to increment totall orders filled
void Server::filled(){
	_total_filled++;
	if(_total_filled % 10 == 0 && _total_filled!=0){
		pay_server();
	}
}

//to get server's hourly salary/pay
double Server::get_hourly_salary(){ return _hourly_salary; }

//change hourly salary
void Server::change_salary(double salary){
	_hourly_salary = salary;
}

//to pay the server
void Server::pay_server(){
	_total_earned += get_hourly_salary();
}

//get total earned salary
double Server::get_total_earned(){ return _total_earned; }

/*
std::ostream& operator<<(std::ostream& os, const Server& server) {
    os << std::setw(40) << "Server:\n\tName: " << server.get_name() 
       << "\nID: " << std::fixed << server.get_employee_number()
       << "\nTotal Filled: " << std::fixed << server.get_total_filled()
       << "\nHourly Salary: " << std::fixed << server.get_hourly_salary()
       << "\nTotal Earned: " << std::fixed << server.get_total_earned();
    return os;

}
*/
