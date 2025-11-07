#ifndef STRING__H
#define STRING__H


class String_
{
    public:
        String_();
        String_(char arr[]);
        String_(const String_ &o);
        void sizewords();
        int getsize() const;
        void ChangeChar(char n, int idx);
        char* getstring() const;
        ~String_();

    private:
        int sizestr;
        char *str_;
};

#endif // STRING__H
