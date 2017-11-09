#ifndef EMPORIUM_H
#define EMPORIUM_H
#include <vector>
#include<iostream>

#include "items.h"
#include "server.h"
#include "order.h"
#include "manager.h"
#include "customer.h"
using namespace std;

class Emporium{
	public:
		
		vector<Containr> get_containers();
		vector<Topping> get_toppings();
		vector<Flavor> get_flavors();
		vector<Server> get_servers();
		vector<Customer> get_customers();
		vector<Order> get_orders();
		vector<Manager> get_managers();

		void add_new_container(Containr cont);
		void add_new_flavor(Flavor flav);
		void add_new_topping(Topping flav);
		void add_new_server(Server server);
		void add_new_customer(Customer customer);
		void add_new_manager(Manager manager);

		void add_new_order(Order order);
		int get_order_id();
	
		void edit_container(int id, Containr container);
		void edit_flavor(int id, Flavor flavor);
		void edit_topping(int id, Topping topping);

		void change_salary(int server_id, double salary);
		void write(string filename);

		//report calls
		string get_servers_report();
		string get_customers_report();
		string get_inventory_report();
		string get_orders_report();
		string get_pnl_report();

		void populate_emporium();

	private:
		vector<Containr> _containers;
		vector<Flavor> _flavors;
		vector<Topping> _toppings;
		vector<Order> _orders;
		vector<Manager> _managers;
		vector<Server> _servers;
		vector<Customer> _customers;
		double cash_register = 0;
		double _stocking_cost = 0;
};
#endif
