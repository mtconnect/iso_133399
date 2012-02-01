#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_association
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_association



namespace cutting_tool_schema_arm
{

class CClassification_association : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CClassification_association(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CClassification_association(CClassification_association const& init);
	void operator=(CClassification_association const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CClassification_association); }

	MemberAttribute<string_type,_altova_mi_altova_CClassification_association_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CClassification_association_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_classificationType, _altova_mi_altova_CClassification_association_altova_Associated_classification> Associated_classification;
	struct Associated_classification { typedef Iterator<CAssociated_classificationType> iterator; };
	MemberElement<CClassified_elementType, _altova_mi_altova_CClassification_association_altova_Classified_element> Classified_element;
	struct Classified_element { typedef Iterator<CClassified_elementType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_altova_CClassification_association_altova_Defintional> Defintional;
	struct Defintional { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CClassification_association_altova_Role> Role;
	struct Role { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_association
