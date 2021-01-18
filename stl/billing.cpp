#include "billing.h"

void MobileBilling::addCustomer(int id, std::string name,std::string phone, double balance) {
    //PrepaidCustomer temp(id,name,phone,balance);
    //customers.push_back(temp);
    customers.push_back(PrepaidCustomer(id,name,phone,balance));
    //customers.emplace_back(id,name,phone,balance);
}

void MobileBilling::displayAll() {
  std::list<PrepaidCustomer>::iteraror iter;
  for(iter=customers.begin();iter!=customers.end();++iter)
    iter->display();
  /* for(PrepaidCustomer& ref:customers)
     ref.display();  */
}
void MobileBilling::displayAll(std::string keystr) {
  std::list<PrepaidCustomer>::iteraror iter;
  for(iter=customers.begin();iter!=customers.end();++iter)
    if(/*TODO: some cond*/)
        iter->display();
}

Customer* MobileBilling::findCustomerById(int key) {
  std::list<PrepaidCustomer>::iteraror iter;
    for(iter=customers.begin();iter!=customers.end();++iter)
        if(iter->getId()==key)
            return &(*iter);
  return nullptr;
}

bool MobileBilling::isCustomerFound(int key) {
  std::list<PrepaidCustomer>::iteraror iter;
    for(iter=customers.begin();iter!=customers.end();++iter)
        if(iter->getId()==key)
            return true;
  return false;
}

void MobileBilling::removeCustomerById(int key) {
  std::list<PrepaidCustomer>::iteraror iter;
  for(iter=customers.begin();iter!=customers.end();++iter)
    if(iter->getId()==key) break;
  if(iter!=customers.end())
     customers.erase(iter);   
} 
double MobileBilling::findAverageBalance() {
  double total=0;
  std::list<PrepaidCustomer>::iteraror iter;
  for(iter=customers.begin();iter!=customers.end();++iter)
    total += iter->getBalance();
  return total/customers.size();
}
int MobileBilling::countByBalanceRange(double minBal, double maxBal) {
  //TODO
}
bool compareByName(const Customer& r1, const Customer& r2) {
  //TODO: compare r1.getName(), r2.getName()
}
void MobileBilling::sortByName() {
  //Method-1
  std::sort(customers.begin(), customers.end() );   //operator< in Prepaid class

  //Method-2
  std::sort(customers.begin(), customers.end(), compareByName);
}
bool compareByBalance(const Customer& r1, const Customer& r2) {
    return r1.getBalance() < r2.getBalance();
}

Customer& MobileBilling::findCustomerWithMinBalance() {
  std::list<PrepaidCustomer> iter;
  iter = std::min_element(customers.begin(), customers.end(),compareByBalance);
       
}


   
