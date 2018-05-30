#include <iostream>
#include <libconfig.h++>

using namespace std;

int main()
{
    libconfig::Config mConfig;
    string strConfPath = "/root/learngit/conf/configAll.cfg";
    try
    {
        mConfig.readFile(strConfPath.c_str());
    }
    catch(libconfig::FileIOException &e)
    {
        cout<<"read file [ "<<strConfPath<< " ] FileIOException"<<endl;
        return -1;
    }
    catch(libconfig::ParseException &e)
    {
        cout<<"read file [ "<<strConfPath<< " ],ParaseException: "<<e.getError()<<",line:"<<e.getLine()<<endl;
        return -1;
    }
    catch(...)
    {
        cout<<"read file ["<<strConfPath<< " ] unknown exception"<<endl;
        return -1;
    }
    try
    {
        const char *account_id;
        mConfig.lookupValue("account.id", account_id);
        cout<<"Account:"<<account_id<<endl;
    }
    catch(...)
    {
    cout<<"Get Account from failed"<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
