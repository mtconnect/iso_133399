#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_limitation
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_limitation



namespace cutting_tool_schema_arm
{

class CValue_limitation : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CValue_limitation(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CValue_limitation(CValue_limitation const& init);
	void operator=(CValue_limitation const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CValue_limitation); }

	MemberAttribute<string_type,_altova_mi_altova_CValue_limitation_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CValue_limitation_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CbooleanType, _altova_mi_altova_CValue_limitation_altova_Envelope> Envelope;
	struct Envelope { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<CIs_defined_byType, _altova_mi_altova_CValue_limitation_altova_Is_defined_by> Is_defined_by;
	struct Is_defined_by { typedef Iterator<CIs_defined_byType> iterator; };
	MemberElement<CLimited_valueType, _altova_mi_altova_CValue_limitation_altova_Limited_value> Limited_value;
	struct Limited_value { typedef Iterator<CLimited_valueType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_limitation
