#ifndef STRING__H
#define STRING__H


class String_
{
    public:

        int sizestr;
        char *str_;

        String_();
        String_(char arr[]);
        String_(const String_ &o);
        void sizewords();
        void CopiarString(const String_ &n);
        //int getsize() const;
        void ChangeChar(char n, int idx);
        //char* getstring() const;

        ~String_();

};

#endif // STRING__H
