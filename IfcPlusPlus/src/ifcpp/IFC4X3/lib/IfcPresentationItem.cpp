/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcPresentationItem.h"

// ENTITY IfcPresentationItem 
IFC4X3::IfcPresentationItem::IfcPresentationItem( int tag ) { m_tag = tag; }
void IFC4X3::IfcPresentationItem::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCPRESENTATIONITEM" << "(";
	stream << ");";
}
void IFC4X3::IfcPresentationItem::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPresentationItem::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
}
void IFC4X3::IfcPresentationItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
}
void IFC4X3::IfcPresentationItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcPresentationItem::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcPresentationItem::unlinkFromInverseCounterparts()
{
}