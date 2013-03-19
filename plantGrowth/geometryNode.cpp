#include "precomp.h"
#include "geometryNode.h"
#include "drawable.h"

using namespace std;

GeometryNode::GeometryNode()
{
}

GeometryNode::~GeometryNode()
{
	m_pDrawableList.clear();
}

void GeometryNode::addDrawable(unique_ptr<const IDrawable>&& pDrawable)
{
	m_pDrawableList.push_back(move(pDrawable));
}

void GeometryNode::render()
{
	for (DrawablePtrList::const_iterator i = m_pDrawableList.cbegin(); i != m_pDrawableList.cend(); i++)
	{
		(*i)->render();
	}
}
