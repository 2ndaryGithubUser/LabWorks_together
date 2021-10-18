#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST
{
    public:
    virtual bool isEmpty() = 0;
	virtual void insertKey(int key) = 0;
	virtual void deleteKey(int key) = 0;
	virtual void searchKey(int key) = 0;
	virtual void getMax() = 0;
	virtual void getMin() = 0;
	virtual void getInorder() = 0;
	virtual void getTree() = 0;
};

#endif