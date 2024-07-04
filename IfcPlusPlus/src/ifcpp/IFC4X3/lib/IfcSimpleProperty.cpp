/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcComplexProperty.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcPropertyDependencyRelationship.h"
#include "ifcpp/IFC4X3/include/IfcPropertySet.h"
#include "ifcpp/IFC4X3/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4X3/include/IfcResourceConstraintRelationship.h"
#include "ifcpp/IFC4X3/include/IfcSimpleProperty.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcSimpleProperty 
IFC4X3::IfcSimpleProperty::IfcSimpleProperty( int tag ) { m_tag = tag; }
void IFC4X3::IfcSimpleProperty::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCSIMPLEPROPERTY" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Specification ) { m_Specification->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcSimpleProperty::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcSimpleProperty::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcIdentifier::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Specification = IfcText::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcSimpleProperty, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcSimpleProperty::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcProperty::getAttributes( vec_attributes );
}
void IFC4X3::IfcSimpleProperty::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcProperty::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcSimpleProperty::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProperty::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcSimpleProperty::unlinkFromInverseCounterparts()
{
	IfcProperty::unlinkFromInverseCounterparts();
}