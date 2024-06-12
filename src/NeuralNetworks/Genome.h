#include <vector>

class Node;
class Connection;

class Genome
{
    public:
        Genome();
        ~Genome();

        void addNode(Node node);
        void addConnection(Connection connection);
        std::vector<Node> getNodes();
        std::vector<Connection> getConnections();
    private:
        std::vector <Node> _nodes;
        std::vector <Connection> _connections;   
};

class Node
{
    public:
        enum class NodeType {
            INPUT,
            OUTPUT,
            HIDDEN
        };

        enum class ActivationFunction {
            SIG
        };
        Node(NodeType type, int id, ActivationFunction activationFunction);
        ~Node();

        void setBias(double bias);
        double getBias();
        NodeType getType();
        int getId();
    private:
        NodeType _type;
        int _id;
        double bias;
        ActivationFunction _activationFunction;
};

class Connection
{
    public:
        Connection();
        Connection(Node* from, Node* to, double weight);
        ~Connection();
    private:
        Node* _from;
        Node* _to;
        double _weight;
};