class CString {
protected:
    char* filename = new char[128];
    char* data = new char[1024];
public:
    CString(char* Data){
        int i = 0;
        while(Data[i] != '.'){
            filename[i] = Data[i];
            i++;
        }
        filename[i] = '.';
        i++;
        while(Data[i] != ' '){
            filename[i] = Data[i];
            i++;
        }
        i++;
        filename[i] = '\0';

        int n = 0;
        while(Data[i] != '\0'){
            if(Data[i] == '\n' || Data[i] == '\r' || Data[i] == '\0'){
                data[n] = '\0';
                n++;
                break;
            }
            data[n] = Data[i];
            n++;
            i++;
        }
        data[n] = '\0';
    }
    virtual int output() = 0;   //  const char *FileName
    virtual ~CString(){
        delete[] data;
        delete[] filename;
    }
};
