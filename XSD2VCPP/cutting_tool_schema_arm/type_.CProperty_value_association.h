#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_value_association
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_value_association



namespace cutting_tool_schema_arm
{

class CProperty_value_association : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CProperty_value_association(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CProperty_value_association(CProperty_value_association const& init);
	void operator=(CProperty_value_association const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CProperty_value_association); }

	MemberAttribute<string_type,_altova_mi_altova_CProperty_value_association_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CProperty_value_association_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CbooleanType, _altova_mi_altova_CProperty_value_association_altova_Definitional> Definitional;
	struct Definitional { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<CDescribed_elementType, _altova_mi_altova_CProperty_value_association_altova_Described_element> Described_element;
	struct Described_element { typedef Iterator<CDescribed_elementType> iterator; };
	MemberElement<CDescribing_property_valueType, _altova_mi_altova_CProperty_value_association_altova_Describing_property_value> Describing_property_value;
	struct Describing_property_value { typedef Iterator<CDescribing_property_valueType> iterator; };
	MemberElement<CDescriptionType23, _altova_mi_altova_CProperty_value_association_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType23> iterator; };
	MemberElement<CValidity_contextType, _altova_mi_altova_CProperty_value_association_altova_Validity_context> Validity_context;
	struct Validity_context { typedef Iterator<CValidity_contextType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_value_association
