class CString {
protected:
    char* filename = new char[128];
    char* data = new char[1024];
public:
    CString(char* Data);
    virtual int output() = 0;
    virtual ~CString();
};
