#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_model
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_model



namespace cutting_tool_schema_arm
{

class CExternal_model : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CExternal_model(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CExternal_model(CExternal_model const& init);
	void operator=(CExternal_model const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CExternal_model); }

	MemberAttribute<string_type,_altova_mi_altova_CExternal_model_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CExternal_model_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDescriptionType12, _altova_mi_altova_CExternal_model_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType12> iterator; };
	MemberElement<CIs_defined_asType, _altova_mi_altova_CExternal_model_altova_Is_defined_as> Is_defined_as;
	struct Is_defined_as { typedef Iterator<CIs_defined_asType> iterator; };
	MemberElement<CIs_defined_inType, _altova_mi_altova_CExternal_model_altova_Is_defined_in> Is_defined_in;
	struct Is_defined_in { typedef Iterator<CIs_defined_inType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CExternal_model_altova_Model_id> Model_id;
	struct Model_id { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_model
