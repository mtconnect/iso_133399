#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeneral_classification
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeneral_classification



namespace cutting_tool_schema_arm
{

class CGeneral_classification : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CGeneral_classification(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CGeneral_classification(CGeneral_classification const& init);
	void operator=(CGeneral_classification const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CGeneral_classification); }

	MemberAttribute<string_type,_altova_mi_altova_CGeneral_classification_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CGeneral_classification_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CClassification_sourceType, _altova_mi_altova_CGeneral_classification_altova_Classification_source> Classification_source;
	struct Classification_source { typedef Iterator<CClassification_sourceType> iterator; };
	MemberElement<CDescriptionType13, _altova_mi_altova_CGeneral_classification_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType13> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CGeneral_classification_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CUsed_classification_systemType2, _altova_mi_altova_CGeneral_classification_altova_Used_classification_system> Used_classification_system;
	struct Used_classification_system { typedef Iterator<CUsed_classification_systemType2> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CGeneral_classification_altova_Version_id> Version_id;
	struct Version_id { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeneral_classification
