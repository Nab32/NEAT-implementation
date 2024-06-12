#include "Genome.h"

Genome::Genome()
{
}

Genome::~Genome()
{
}

void Genome::addNode(Node node)
{
    _nodes.push_back(node);
}

void Genome::addConnection(Connection connection)
{
    _connections.push_back(connection);
}

std::vector<Node> Genome::getNodes()
{
    return _nodes;
}

std::vector<Connection> Genome::getConnections()
{
    return _connections;
}

Node::Node(NodeType type, int id, ActivationFunction activationFunction)
{
    _type = type;
    _id = id;
    _activationFunction = activationFunction;
}

Node::~Node()
{
}

void Node::setBias(double bias)
{
    this->bias = bias;
}

double Node::getBias()
{
    return bias;
}

Node::NodeType Node::getType()
{
    return _type;
}

int Node::getId()
{
    return _id;
}

Connection::Connection()
{
}

Connection::Connection(Node* from, Node* to, double weight)
{
    _from = from;
    _to = to;
    _weight = weight;
}

Connection::~Connection()
{
}