/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcActorSelect.h"
#include "ifcpp/IFC4X3/include/IfcDate.h"
#include "ifcpp/IFC4X3/include/IfcDateTime.h"
#include "ifcpp/IFC4X3/include/IfcDocumentConfidentialityEnum.h"
#include "ifcpp/IFC4X3/include/IfcDocumentInformation.h"
#include "ifcpp/IFC4X3/include/IfcDocumentInformationRelationship.h"
#include "ifcpp/IFC4X3/include/IfcDocumentReference.h"
#include "ifcpp/IFC4X3/include/IfcDocumentStatusEnum.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesDocument.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcURIReference.h"

// ENTITY IfcDocumentInformation 
IFC4X3::IfcDocumentInformation::IfcDocumentInformation( int tag ) { m_tag = tag; }
void IFC4X3::IfcDocumentInformation::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCDOCUMENTINFORMATION" << "(";
	if( m_Identification ) { m_Identification->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Location ) { m_Location->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Purpose ) { m_Purpose->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_IntendedUse ) { m_IntendedUse->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Scope ) { m_Scope->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Revision ) { m_Revision->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_DocumentOwner ) { m_DocumentOwner->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_Editors.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_Editors.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcActorSelect>& type_object = m_Editors[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, true, precision );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ",";
	if( m_CreationTime ) { m_CreationTime->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_LastRevisionTime ) { m_LastRevisionTime->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ElectronicFormat ) { m_ElectronicFormat->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ValidFrom ) { m_ValidFrom->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ValidUntil ) { m_ValidUntil->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Confidentiality ) { m_Confidentiality->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Status ) { m_Status->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcDocumentInformation::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcDocumentInformation::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Identification = IfcIdentifier::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Name = IfcLabel::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Description = IfcText::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Location = IfcURIReference::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_Purpose = IfcText::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_IntendedUse = IfcText::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){m_Scope = IfcText::createObjectFromSTEP( args[6], map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){m_Revision = IfcLabel::createObjectFromSTEP( args[7], map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){m_DocumentOwner = IfcActorSelect::createObjectFromSTEP( args[8], map, errorStream, entityIdNotFound );}
	if( num_args > 9 ){readSelectList( args[9], m_Editors, map, errorStream, entityIdNotFound );}
	if( num_args > 10 ){m_CreationTime = IfcDateTime::createObjectFromSTEP( args[10], map, errorStream, entityIdNotFound );}
	if( num_args > 11 ){m_LastRevisionTime = IfcDateTime::createObjectFromSTEP( args[11], map, errorStream, entityIdNotFound );}
	if( num_args > 12 ){m_ElectronicFormat = IfcIdentifier::createObjectFromSTEP( args[12], map, errorStream, entityIdNotFound );}
	if( num_args > 13 ){m_ValidFrom = IfcDate::createObjectFromSTEP( args[13], map, errorStream, entityIdNotFound );}
	if( num_args > 14 ){m_ValidUntil = IfcDate::createObjectFromSTEP( args[14], map, errorStream, entityIdNotFound );}
	if( num_args > 15 ){m_Confidentiality = IfcDocumentConfidentialityEnum::createObjectFromSTEP( args[15], map, errorStream, entityIdNotFound );}
	if( num_args > 16 ){m_Status = IfcDocumentStatusEnum::createObjectFromSTEP( args[16], map, errorStream, entityIdNotFound );}
	if( num_args != 17 ){ errorStream << "Wrong parameter count for entity IfcDocumentInformation, expecting 17, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcDocumentInformation::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcExternalInformation::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Identification", m_Identification ) );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.emplace_back( std::make_pair( "Location", m_Location ) );
	vec_attributes.emplace_back( std::make_pair( "Purpose", m_Purpose ) );
	vec_attributes.emplace_back( std::make_pair( "IntendedUse", m_IntendedUse ) );
	vec_attributes.emplace_back( std::make_pair( "Scope", m_Scope ) );
	vec_attributes.emplace_back( std::make_pair( "Revision", m_Revision ) );
	vec_attributes.emplace_back( std::make_pair( "DocumentOwner", m_DocumentOwner ) );
	shared_ptr<AttributeObjectVector> Editors_vec_object( new AttributeObjectVector() );
	std::copy( m_Editors.begin(), m_Editors.end(), std::back_inserter( Editors_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Editors", Editors_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "CreationTime", m_CreationTime ) );
	vec_attributes.emplace_back( std::make_pair( "LastRevisionTime", m_LastRevisionTime ) );
	vec_attributes.emplace_back( std::make_pair( "ElectronicFormat", m_ElectronicFormat ) );
	vec_attributes.emplace_back( std::make_pair( "ValidFrom", m_ValidFrom ) );
	vec_attributes.emplace_back( std::make_pair( "ValidUntil", m_ValidUntil ) );
	vec_attributes.emplace_back( std::make_pair( "Confidentiality", m_Confidentiality ) );
	vec_attributes.emplace_back( std::make_pair( "Status", m_Status ) );
}
void IFC4X3::IfcDocumentInformation::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcExternalInformation::getAttributesInverse( vec_attributes_inverse );
	shared_ptr<AttributeObjectVector> DocumentInfoForObjects_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_DocumentInfoForObjects_inverse.size(); ++i )
	{
		if( !m_DocumentInfoForObjects_inverse[i].expired() )
		{
			DocumentInfoForObjects_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssociatesDocument>( m_DocumentInfoForObjects_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "DocumentInfoForObjects_inverse", DocumentInfoForObjects_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> HasDocumentReferences_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasDocumentReferences_inverse.size(); ++i )
	{
		if( !m_HasDocumentReferences_inverse[i].expired() )
		{
			HasDocumentReferences_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcDocumentReference>( m_HasDocumentReferences_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasDocumentReferences_inverse", HasDocumentReferences_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> IsPointedTo_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_IsPointedTo_inverse.size(); ++i )
	{
		if( !m_IsPointedTo_inverse[i].expired() )
		{
			IsPointedTo_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcDocumentInformationRelationship>( m_IsPointedTo_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "IsPointedTo_inverse", IsPointedTo_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> IsPointer_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_IsPointer_inverse.size(); ++i )
	{
		if( !m_IsPointer_inverse[i].expired() )
		{
			IsPointer_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcDocumentInformationRelationship>( m_IsPointer_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "IsPointer_inverse", IsPointer_inverse_vec_obj ) );
}
void IFC4X3::IfcDocumentInformation::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExternalInformation::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcDocumentInformation::unlinkFromInverseCounterparts()
{
	IfcExternalInformation::unlinkFromInverseCounterparts();
}
