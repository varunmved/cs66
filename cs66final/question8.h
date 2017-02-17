class Sample
{
public:
    Sample(const int contents)
    {
        this->contents = contents;
        access = 0;
    }
    
    virtual ~Sample() {};
    
    void const setContents(const int contents)
    {
        this->contents = contents;
        ++access;
    }
    
    int const getContents() const
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

class Sample
{
public:
    Sample(const int contents)
    {
        this->contents = contents;
        access = 0;
    }
    
    virtual ~Sample() {};
    
    void const setContents(const int contents)
    {
        this->contents = contents;
        ++access;
    }
    
    int const getContents() const
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