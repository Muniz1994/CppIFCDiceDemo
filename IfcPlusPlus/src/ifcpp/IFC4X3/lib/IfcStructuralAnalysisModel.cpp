/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAnalysisModelTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
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
#include "ifcpp/IFC4X3/include/IfcRelServicesBuildings.h"
#include "ifcpp/IFC4X3/include/IfcStructuralAnalysisModel.h"
#include "ifcpp/IFC4X3/include/IfcStructuralLoadGroup.h"
#include "ifcpp/IFC4X3/include/IfcStructuralResultGroup.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcStructuralAnalysisModel 
IFC4X3::IfcStructuralAnalysisModel::IfcStructuralAnalysisModel( int tag ) { m_tag = tag; }
void IFC4X3::IfcStructuralAnalysisModel::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCSTRUCTURALANALYSISMODEL" << "(";
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
	if( m_OrientationOf2DPlane ) { stream << "#" << m_OrientationOf2DPlane->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_LoadedBy );
	stream << ",";
	writeEntityList( stream, m_HasResults );
	stream << ",";
	if( m_SharedPlacement ) { stream << "#" << m_SharedPlacement->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcStructuralAnalysisModel::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcStructuralAnalysisModel::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_PredefinedType = IfcAnalysisModelTypeEnum::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){readEntityReference( args[6], m_OrientationOf2DPlane, map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){readEntityReferenceList( args[7], m_LoadedBy, map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){readEntityReferenceList( args[8], m_HasResults, map, errorStream, entityIdNotFound );}
	if( num_args > 9 ){readEntityReference( args[9], m_SharedPlacement, map, errorStream, entityIdNotFound );}
	if( num_args != 10 ){ errorStream << "Wrong parameter count for entity IfcStructuralAnalysisModel, expecting 10, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcStructuralAnalysisModel::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcSystem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.emplace_back( std::make_pair( "OrientationOf2DPlane", m_OrientationOf2DPlane ) );
	shared_ptr<AttributeObjectVector> LoadedBy_vec_object( new AttributeObjectVector() );
	std::copy( m_LoadedBy.begin(), m_LoadedBy.end(), std::back_inserter( LoadedBy_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "LoadedBy", LoadedBy_vec_object ) );
	shared_ptr<AttributeObjectVector> HasResults_vec_object( new AttributeObjectVector() );
	std::copy( m_HasResults.begin(), m_HasResults.end(), std::back_inserter( HasResults_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "HasResults", HasResults_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "SharedPlacement", m_SharedPlacement ) );
}
void IFC4X3::IfcStructuralAnalysisModel::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcSystem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcStructuralAnalysisModel::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSystem::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcStructuralAnalysisModel> ptr_self = dynamic_pointer_cast<IfcStructuralAnalysisModel>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcStructuralAnalysisModel::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_HasResults.size(); ++i )
	{
		if( m_HasResults[i] )
		{
			m_HasResults[i]->m_ResultGroupFor_inverse.emplace_back( ptr_self );
		}
	}
	for( size_t i=0; i<m_LoadedBy.size(); ++i )
	{
		if( m_LoadedBy[i] )
		{
			m_LoadedBy[i]->m_LoadGroupFor_inverse.emplace_back( ptr_self );
		}
	}
}
void IFC4X3::IfcStructuralAnalysisModel::unlinkFromInverseCounterparts()
{
	IfcSystem::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_HasResults.size(); ++i )
	{
		if( m_HasResults[i] )
		{
			std::vector<weak_ptr<IfcStructuralAnalysisModel> >& ResultGroupFor_inverse = m_HasResults[i]->m_ResultGroupFor_inverse;
			for( auto it_ResultGroupFor_inverse = ResultGroupFor_inverse.begin(); it_ResultGroupFor_inverse != ResultGroupFor_inverse.end(); )
			{
				weak_ptr<IfcStructuralAnalysisModel> self_candidate_weak = *it_ResultGroupFor_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_ResultGroupFor_inverse;
					continue;
				}
				shared_ptr<IfcStructuralAnalysisModel> self_candidate( *it_ResultGroupFor_inverse );
				if( self_candidate.get() == this )
				{
					it_ResultGroupFor_inverse= ResultGroupFor_inverse.erase( it_ResultGroupFor_inverse );
				}
				else
				{
					++it_ResultGroupFor_inverse;
				}
			}
		}
	}
	for( size_t i=0; i<m_LoadedBy.size(); ++i )
	{
		if( m_LoadedBy[i] )
		{
			std::vector<weak_ptr<IfcStructuralAnalysisModel> >& LoadGroupFor_inverse = m_LoadedBy[i]->m_LoadGroupFor_inverse;
			for( auto it_LoadGroupFor_inverse = LoadGroupFor_inverse.begin(); it_LoadGroupFor_inverse != LoadGroupFor_inverse.end(); )
			{
				weak_ptr<IfcStructuralAnalysisModel> self_candidate_weak = *it_LoadGroupFor_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_LoadGroupFor_inverse;
					continue;
				}
				shared_ptr<IfcStructuralAnalysisModel> self_candidate( *it_LoadGroupFor_inverse );
				if( self_candidate.get() == this )
				{
					it_LoadGroupFor_inverse= LoadGroupFor_inverse.erase( it_LoadGroupFor_inverse );
				}
				else
				{
					++it_LoadGroupFor_inverse;
				}
			}
		}
	}
}
