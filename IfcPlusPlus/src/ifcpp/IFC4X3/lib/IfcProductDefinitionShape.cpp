/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcProduct.h"
#include "ifcpp/IFC4X3/include/IfcProductDefinitionShape.h"
#include "ifcpp/IFC4X3/include/IfcRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcShapeAspect.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcProductDefinitionShape 
IFC4X3::IfcProductDefinitionShape::IfcProductDefinitionShape( int tag ) { m_tag = tag; }
void IFC4X3::IfcProductDefinitionShape::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCPRODUCTDEFINITIONSHAPE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Representations );
	stream << ");";
}
void IFC4X3::IfcProductDefinitionShape::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcProductDefinitionShape::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readEntityReferenceList( args[2], m_Representations, map, errorStream, entityIdNotFound );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcProductDefinitionShape, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcProductDefinitionShape::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcProductRepresentation::getAttributes( vec_attributes );
}
void IFC4X3::IfcProductDefinitionShape::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcProductRepresentation::getAttributesInverse( vec_attributes_inverse );
	shared_ptr<AttributeObjectVector> ShapeOfProduct_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_ShapeOfProduct_inverse.size(); ++i )
	{
		if( !m_ShapeOfProduct_inverse[i].expired() )
		{
			ShapeOfProduct_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcProduct>( m_ShapeOfProduct_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "ShapeOfProduct_inverse", ShapeOfProduct_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> HasShapeAspects_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasShapeAspects_inverse.size(); ++i )
	{
		if( !m_HasShapeAspects_inverse[i].expired() )
		{
			HasShapeAspects_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcShapeAspect>( m_HasShapeAspects_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasShapeAspects_inverse", HasShapeAspects_inverse_vec_obj ) );
}
void IFC4X3::IfcProductDefinitionShape::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProductRepresentation::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcProductDefinitionShape::unlinkFromInverseCounterparts()
{
	IfcProductRepresentation::unlinkFromInverseCounterparts();
}