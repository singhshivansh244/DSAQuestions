#include<vector>
using namespace std;
template<typename T>
class treeNode {
public:
	T data;
	vector<treeNode*> child;
	treeNode(T data) {
		this->data = data;
	}
};
