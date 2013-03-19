#include "precomp.h"
#include "transformNode.h"

using namespace std;

TransformNode::TransformNode(unique_ptr<Matrix4>& pMatrix) : m_pMatrix(pMatrix.release())
{
}

void TransformNode::render()
{
}