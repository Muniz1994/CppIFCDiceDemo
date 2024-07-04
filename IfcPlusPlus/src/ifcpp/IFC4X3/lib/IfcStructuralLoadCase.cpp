/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcActionSourceTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcActionTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLoadGroupTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToGroup.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcStructuralAnalysisModel.h"
#include "ifcpp/IFC4X3/include/IfcStructuralLoadCase.h"
#include "ifcpp/IFC4X3/include/IfcStructuralResultGroup.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcStructuralLoadCase 
IFC4X3::IfcStructuralLoadCase::IfcStructuralLoadCase( int tag ) { m_tag = tag; }
void IFC4X3::IfcStructuralLoadCase::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCSTRUCTURALLOADCASE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ActionType ) { m_ActionType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ActionSource ) { m_ActionSource->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Coefficient ) { m_Coefficient->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Purpose ) { m_Purpose->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfRealList( stream, m_SelfWeightCoefficients, true, precision );
	stream << ");";
}
void IFC4X3::IfcStructuralLoadCase::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcStructuralLoadCase::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_PredefinedType = IfcLoadGroupTypeEnum::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){m_ActionType = IfcActionTypeEnum::createObjectFromSTEP( args[6], map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){m_ActionSource = IfcActionSourceTypeEnum::createObjectFromSTEP( args[7], map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){m_Coefficient = IfcRatioMeasure::createObjectFromSTEP( args[8], map, errorStream, entityIdNotFound );}
	if( num_args > 9 ){m_Purpose = IfcLabel::createObjectFromSTEP( args[9], map, errorStream, entityIdNotFound );}
	if( num_args > 10 ){readTypeOfRealList( args[10], m_SelfWeightCoefficients );}
	if( num_args != 11 ){ errorStream << "Wrong parameter count for entity IfcStructuralLoadCase, expecting 11, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcStructuralLoadCase::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcStructuralLoadGroup::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> SelfWeightCoefficients_vec_object( new AttributeObjectVector() );
	std::copy( m_SelfWeightCoefficients.begin(), m_SelfWeightCoefficients.end(), std::back_inserter( SelfWeightCoefficients_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "SelfWeightCoefficients", SelfWeightCoefficients_vec_object ) );
}
void IFC4X3::IfcStructuralLoadCase::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcStructuralLoadGroup::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcStructuralLoadCase::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralLoadGroup::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcStructuralLoadCase::unlinkFromInverseCounterparts()
{
	IfcStructuralLoadGroup::unlinkFromInverseCounterparts();
}