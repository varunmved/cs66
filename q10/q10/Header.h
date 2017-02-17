class Sample
{
public:
    Sample(const int contents)
    {
        this->contents = contents;
        access = 0;
    }
    
    virtual ~Sample() {};
    
    void setContents(const int contents)
    {
        this->contents = contents;
        ++access;
    }
    
    int getContents() const
    {
        return contents;
        ++access;
    }
    
    const int getAccess() const
    {
        return access;
    }
    
    
private:
    int contents;
    int access;
};