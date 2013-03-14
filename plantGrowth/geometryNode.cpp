#include "precomp.h"
#include "geometryNode.h"

using namespace std;

GeometryNode::GeometryNode()
{
}

void GeometryNode::addDrawable(auto_ptr<Drawable>& pDrawable)
{
	m_pDrawableList.push_back(pDrawable.release());
}

void GeometryNode::render()
{
	for (DrawableList::const_iterator i = m_pDrawableList.cbegin(); i != m_pDrawableList.cend(); i++)
	{
		(*i)->render();
	}
}
