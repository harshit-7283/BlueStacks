#include<bits/stdc++.h>
using namespace std;
enum Action {
	NONE, READ, WRITE, DELETE
};

class Resource{
	string name;
	public:
	string getName() {
		return this->name;
	}
	
	void setName(string name) {
		this->name = name;
	}
	
};

class Role {
	string name;
	map<string, vector<Action> > permissions;
	public:
	Role(string name) {
		this->name = name;
	}
	
	string getName() {
		return this->name;
	}
	
	void setName(string name) {
		this->name = name;
	}
	
	bool validateAccess(Resource resource, Action action) {
		if (this->name == "admin") {
			return true;
		}
		else if (this->permissions.find(resource.getName()) != permissions.end()) {
			return this->permissions[resource.getName()].contains(action);
		}
		
		return false;
	}
	
	void setAccess (Resource resource, vector<Action> actions)
	{
		if (validateActions(vector<Action> actions) ) {
			permissions[resource.getName()] =  actions;  
		}
		else {
			cout<<" Something went wrong while associatingactio ";
		}
    permissions[resource.getName()] =  actions; 

	}
	
	bool validateActions(vector<Action> actions) {
		//you can't have NONE and anyother action at the same time.
		
		if ((find(actions.begin(),actions.end(),NONE) !=actions.end() )&& actions.size() != 1) {
			cout<<"Invalid combinations of actions for the resource";
			return false;
		}
		return true;
	}
	
};

class User {
	string name;
	Role role;
   public:
    User(string name,Role role)
    {
    	this->name=name;
    	this->role=role;
    
	}
	validateAccess(Resource res,Vector<Action> act) {
	this->role.validateAccess(res,act);
	}
};

class Application{
	vector<Resources> resources;
	vector<Roles> roles;
	vector<Users> users;

	void addResource(Resource r)
	{
		resources.push_back(r);
	}
	void addRole(Role role)
	{
		roles.push_back(role);
	}
	void addUser(Users user)
	{
		Users.push_back(user);
	}
	
};

void initialize(Application& app) {
	Resource r1 = new Resource("harshit");
	Resource r2 = new Resource("anuj");
	app.addResource(r1);
	app.addResource(r2);
	
	Role adminRole = new Role("admin_role");
	User admin=new User("admin",adminRole);
	vector<Action> act{READ,WRITE,DELETE};
	adminRole.setAccess(r1, act);
	adminRole.setAccess(r2, act);
	app.addRole(adminRole);
    app.addUser(admin);
	
	Role role1=new Role("role1";)
	User user1 =new User(name, role1);
	vector<Action> act1{"Read"};
	user1.setAccess(r1,act1);
	app.addUser(user1);
	app.addRole(role1);
	
}

int main() {
	Application app;
	initialize(app);
	
	
//    main part to be implemented
	
}
   
   
}

