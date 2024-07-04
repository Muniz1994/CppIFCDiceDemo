/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcInteger.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLayerSetDirectionEnum.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLogical.h"
#include "ifcpp/IFC4X3/include/IfcMaterial.h"
#include "ifcpp/IFC4X3/include/IfcMaterialLayerSet.h"
#include "ifcpp/IFC4X3/include/IfcMaterialLayerWithOffsets.h"
#include "ifcpp/IFC4X3/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4X3/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesMaterial.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcMaterialLayerWithOffsets 
IFC4X3::IfcMaterialLayerWithOffsets::IfcMaterialLayerWithOffsets( int tag ) { m_tag = tag; }
void IFC4X3::IfcMaterialLayerWithOffsets::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCMATERIALLAYERWITHOFFSETS" << "(";
	if( m_Material ) { stream << "#" << m_Material->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_LayerThickness ) { m_LayerThickness->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_IsVentilated ) { m_IsVentilated->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Category ) { m_Category->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Priority ) { m_Priority->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OffsetDirection ) { m_OffsetDirection->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfRealList( stream, m_OffsetValues, false, precision );
	stream << ");";
}
void IFC4X3::IfcMaterialLayerWithOffsets::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcMaterialLayerWithOffsets::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Material, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_LayerThickness = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_IsVentilated = IfcLogical::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Name = IfcLabel::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_Description = IfcText::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_Category = IfcLabel::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){m_Priority = IfcInteger::createObjectFromSTEP( args[6], map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){m_OffsetDirection = IfcLayerSetDirectionEnum::createObjectFromSTEP( args[7], map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){readTypeOfRealList( args[8], m_OffsetValues );}
	if( num_args != 9 ){ errorStream << "Wrong parameter count for entity IfcMaterialLayerWithOffsets, expecting 9, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcMaterialLayerWithOffsets::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcMaterialLayer::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "OffsetDirection", m_OffsetDirection ) );
	shared_ptr<AttributeObjectVector> OffsetValues_vec_object( new AttributeObjectVector() );
	std::copy( m_OffsetValues.begin(), m_OffsetValues.end(), std::back_inserter( OffsetValues_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "OffsetValues", OffsetValues_vec_object ) );
}
void IFC4X3::IfcMaterialLayerWithOffsets::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcMaterialLayer::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcMaterialLayerWithOffsets::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcMaterialLayer::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcMaterialLayerWithOffsets::unlinkFromInverseCounterparts()
{
	IfcMaterialLayer::unlinkFromInverseCounterparts();
}