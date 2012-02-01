#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_attribute
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_attribute



namespace cutting_tool_schema_arm
{

class CClassification_attribute : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CClassification_attribute(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CClassification_attribute(CClassification_attribute const& init);
	void operator=(CClassification_attribute const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CClassification_attribute); }

	MemberAttribute<string_type,_altova_mi_altova_CClassification_attribute_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CClassification_attribute_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAllowed_valueType, _altova_mi_altova_CClassification_attribute_altova_Allowed_value> Allowed_value;
	struct Allowed_value { typedef Iterator<CAllowed_valueType> iterator; };
	MemberElement<CAssociated_classificationType2, _altova_mi_altova_CClassification_attribute_altova_Associated_classification> Associated_classification;
	struct Associated_classification { typedef Iterator<CAssociated_classificationType2> iterator; };
	MemberElement<CAttribute_definitionType, _altova_mi_altova_CClassification_attribute_altova_Attribute_definition> Attribute_definition;
	struct Attribute_definition { typedef Iterator<CAttribute_definitionType> iterator; };
	MemberElement<CDescriptionType3, _altova_mi_altova_CClassification_attribute_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType3> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CClassification_attribute_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CNameType2, _altova_mi_altova_CClassification_attribute_altova_Name> Name;
	struct Name { typedef Iterator<CNameType2> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_attribute
